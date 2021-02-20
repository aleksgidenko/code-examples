#include <stdio.h>
#include <string.h>

char* extractWords(char* text) {
  for (int i=0; i<strlen(text); i++) {
    printf("%c", text[i]);
  }
}

int main(void) {
  // shakespeare excerpt from the winters tale
  char* text = "Nine changes of the watery star hath been\n\
The shepherd's note since we have left our throne\n\
Without a burthen: time as long again\n\
Would be find up, my brother, with our thanks;\n\
And yet we should, for perpetuity,\n\
Go hence in debt: and therefore, like a cipher,\n\
Yet standing in rich place, I multiply\n\
With one 'We thank you' many thousands moe\n\
That go before it.";

  // puts(text);
  extractWords(text);
  return 0;
}
