#ifndef OBJECT_H
#define OBJECT_H

class Object
{
private:
	char m_c;
	int m_x;
	int m_y;

public:
	Object();
	
	void setPos(int x, int y);

	int getPos() const;

	void update();
	void draw();

protected:
	

};

#endif
