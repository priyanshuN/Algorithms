#include <stdio.h>
#include <stdint.h>
#include <stdarg.h>

void zprintf(uint8_t *format, ...)
  {
      va_list ap;
      va_start(ap, format);

      uint8_t *ptr;

      for (ptr = format; *ptr != '\0'; ptr++) {
          if (*ptr == '%') {
              ptr++;
              switch (*ptr) {
                  case 's':
                      fputs(va_arg(ap, uint8_t *),stdout);
                      break;
                 case '%':
                      putchar('%');
                      break;
              }
             } else {
               putchar(*ptr);

            }
           }

           va_end(ap);
}

int main(){

    zprintf("%% Hello %s\n","World");    
    return 0;
}