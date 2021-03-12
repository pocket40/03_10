#include <stdio.h>

namespace text {
	typedef struct {
		char* str;
	}Line;

	void display_line(const Line* pLine) {
		printf("%s\n", pLine->str);
	}
}

namespace graphic {
	typedef struct {
		int start_x, start_y;
		int end_x, end_y;
	} Line;

	void display_line(const Line* pLine) {
		printf("(%d,%d)-----(%d,%d)\n",pLine->start_x, pLine->start_y, pLine->end_x, pLine->end_y);
	}

}
	int main() {
		text::Line line = { "hello, world" };
		text::display_line(&line);

		return 0;
	}