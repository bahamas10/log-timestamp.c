#require "../log-timestamp.c" as LOG
int main(int argc, char **argv) {
	int i;
	for (i = 0; i < argc; i++)
		LOG("%s\n", argv[i]);
	return 0;
}
