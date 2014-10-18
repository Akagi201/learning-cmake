
/*
 * @file main.c
 * @author Akagi201
 * @date 2014/10/18
 *
 * get the content of www.baidu.com and write to /tmp/curl-test
 */


#include <curl/curl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

FILE *fp = NULL;

int write_data(void *ptr, size_t size, size_t nmemb, void *stream) {
  int written = fwrite(ptr, size, nmemb, (FILE *)fp);
  return written;
}

int main(void) {
  const char * path = "/tmp/curl-test";
  const char * mode = "w";

  fp = fopen(path, mode);
  curl_global_init(CURL_GLOBAL_ALL);

  CURL *curl = curl_easy_init();
  curl_easy_setopt(curl, CURLOPT_URL, "http://www.baidu.com");
  curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, write_data);
  curl_easy_setopt(curl, CURLOPT_VERBOSE, 1);

  CURLcode res = curl_easy_perform(curl);

  curl_easy_cleanup(curl);

  return 0;
}
