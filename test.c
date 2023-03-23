

char **error_logs = (char *[]){"ERROR 0: Sai cu phap","ERROR 1: Tran bo nho","ERROR 2: Gia tri truyen vao sai","ERROR 3: Khong tra ve","ERROR 4: Timeout"};

int main()
{
// in lỗi số 0
printf("%s\n",*error_logs++);
// in lỗi số 1
printf("%s\n",*error_logs++);
// in lỗi số 2
printf("%s\n",*error_logs++);
// in lỗi số 3
printf("%s\n",*error_logs++);
// in lỗi số 4
printf("%s\n",*error_logs++);

getchar();
return 0;
}
