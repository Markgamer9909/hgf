def setup():
    size(400,400)
def draw():
    if keyPressed:
        if key == 'd':
            img = loadImage("1.jpg")
            image(img,0,0,400,400)
    if keyPressed:
        if key == 'f':
            img = loadImage("12.jpg")
            image(img,0,0,400,400)
