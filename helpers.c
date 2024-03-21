#include "helpers.h"

void colorize(int height, int width, RGBTRIPLE image[height][width])
{
    // Choose the desired color to replace the black pixels
    RGBTRIPLE new_color;
    new_color.rgbtRed = 255; // Red color
    new_color.rgbtGreen = 0;
    new_color.rgbtBlue = 0;

    // Iterate through each pixel in the image
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            // Check if the pixel is black (all RGB values are zero)
            if (image[i][j].rgbtRed == 0 && image[i][j].rgbtGreen == 0 && image[i][j].rgbtBlue == 0)
            {
                // Replace the black pixel with the chosen new color
                image[i][j] = new_color;
            }
        }
    }
}
