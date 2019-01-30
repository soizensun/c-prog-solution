#include <stdio.h>

struct complex {
  float fi;
  float i;
};

struct complex add_complex(struct complex c, struct complex d){
  	struct complex s;
    s.fi = c.fi + d.fi; // a, c
    s.i = c.i + d.i; // b, d
  	return s;
}

struct complex multiply_complex(struct complex c, struct complex d){
	struct complex ss;
	ss.fi = (c.fi * d.fi)-(c.i * d.i);
  ss.i = (c.fi * d.i)+(c.i * d.fi);
	return ss;
}

void print_complex(char s[9], struct complex a){
  if (a.fi == 0 && a.i == 0)
    printf("%s%.1f\n", s, 0);
  else if (a.fi == 0)
    printf("%s%.1fi\n",s ,a.i);
  else if (a.i == 0)
    printf("%s%.1f\n",s ,a.fi);
  else{
    if (a.i > 0)
      printf("%s%.1f + %.1fi\n", s, a.fi, a.i);
    else if (a.i < 0)
      printf("%s%.1f - %.1fi\n", s, a.fi, a.i * -1);
  }
}


int main()
{
  struct complex C, D, E, F;

  printf("Enter C: ");
  scanf("%f %f", &C.fi, &C.i);
  printf("Enter D: ");
  scanf("%f %f", &D.fi, &D.i);

 
  E = add_complex(C, D);
  F = multiply_complex(C, D);

  print_complex("C + D = ", E);
  print_complex("C x D = ", F);

  return 0;
}