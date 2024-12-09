
#ifndef TEXTURE_H
#define TEXTURE_H

#include <GL/glut.h>
#include <string>

class Texture {
public:
    Texture();
    ~Texture();
    bool load(const std::string& fileName);
    void bind();
    void unbind();

private:
    GLuint textureID;
    int width, height, channels;
};

#endif // TEXTURE_H

