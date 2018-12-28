
#include <stdio.h>

class Album
{
	public:
		Album();
		virtual ~Album();

		virtual void Play();
};

Album::Album()
{
	printf("Album::Album()\n");
}

Album::~Album()
{
	printf("Album::~Album()\n");
}

void Album::Play()
{
	printf("Album::Play()\n");
}

class InAbsentia : public Album
{
	public:
		InAbsentia();
		~InAbsentia();

		void Play();
};

InAbsentia::InAbsentia()
	: Album()
{
	printf("InAbsentia::InAbsentia()\n");
}

InAbsentia::~InAbsentia()
{
	printf("InAbsentia::~InAbsentia()\n");
}

void InAbsentia::Play()
{
	printf("InAbsentia::Play()\n");
}

int main()
{
	InAbsentia in_absentia;
	in_absentia.Play();
	return 0;
}
