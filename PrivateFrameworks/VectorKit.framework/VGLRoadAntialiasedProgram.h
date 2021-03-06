/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VGLRoadAntialiasedProgram : VGLProgram  {
    int _uColorLocation;
    struct _VGLColor { 
        float r; 
        float g; 
        float b; 
        float a; 
    } _color;
    int _uLineWidthLocation;
    float _lineWidth;
}

@property struct _VGLColor { float x1; float x2; float x3; float x4; } color;
@property float lineWidth;

+ (id)fragName;
+ (id)vertName;

- (void)setup;
- (struct _VGLColor { float x1; float x2; float x3; float x4; })color;
- (float)lineWidth;
- (void)setColor:(struct _VGLColor { float x1; float x2; float x3; float x4; })arg1;
- (void)setLineWidth:(float)arg1;

@end
