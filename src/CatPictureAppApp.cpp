#include "cinder/app/AppBasic.h"
#include "cinder/gl/gl.h"

using namespace ci;
using namespace ci::app;
using namespace std;

class CatPictureApp : public AppBasic {
  public:
	void setup();
	void mouseDown( MouseEvent event );	
	void update();
	void draw();

private:
	float Red;
	float Blue;
	float Green;
};

void CatPictureApp::setup()
{
	Red = 0.0f;
	Blue = 0.1f;
	Green = 0.5f;
}

void CatPictureApp::mouseDown( MouseEvent event )
{
}

void CatPictureApp::update()
{
	Red = Red+0.1f;
	if(Red>1.0f){
		Red = 0.0f;
	}

	Blue = Blue+0.1f;
	if(Blue>1.0f){
		Blue = 0.0f;
	}

	Green = Green+0.1f;
	if(Green>1.0f){
		Green = 0.0f;
	}
}

void CatPictureApp::draw()
{
	// clear out the window with black
	gl::clear( Color( Red, Blue, Green ) ); 
}

CINDER_APP_BASIC( CatPictureApp, RendererGl )
