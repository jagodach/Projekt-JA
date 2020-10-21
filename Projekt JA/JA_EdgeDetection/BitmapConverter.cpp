#include "pch.h"
#include "BitmapConverter.h"

unsigned char* BitmapConverter::ConvertBitmapToByte(System::Drawing::Bitmap^ bitmap)
{
	int width = bitmap->Width;
	int height = bitmap->Height;
	unsigned char* bitmapByteArray = new unsigned char[width * height * 3];

	for (int i = 0; i < height; i++)
	{
		for (int j = 0; j < width; j++)
		{
			int currentIndex = i * width + j;

			System::Drawing::Color pixel = bitmap->GetPixel(j, i);
			bitmapByteArray[currentIndex] = pixel.R;
			bitmapByteArray[currentIndex + 1] = pixel.G;
			bitmapByteArray[currentIndex + 2] = pixel.B;
		}
	}

	return bitmapByteArray;
}


