class Box
{
private:
	int length;
	int width;
	int height;
public:
	void setLength(double l);
	void setWidth(double w);
	void setHeight(double h);

	int getLength();
	int getWidth();
	int getHeight();

	int calcVolume();
};

