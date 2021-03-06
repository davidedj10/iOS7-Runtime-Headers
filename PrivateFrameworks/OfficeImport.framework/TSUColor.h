/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface TSUColor : NSObject <NSCopying> {
    struct CGColor { } *mCGColor;
}

@property(readonly) struct CGColor { }* CGColor;

+ (id)colorWithUIColor:(id)arg1;
+ (id)colorWithRGBBytes:(unsigned char)arg1 :(unsigned char)arg2 :(unsigned char)arg3;
+ (id)colorWithEshColor:(const struct EshColor { struct Data { int x_1_1_1; union Value { struct RGB { unsigned char x_1_3_1; unsigned char x_1_3_2; unsigned char x_1_3_3; } x_2_2_1; unsigned short x_2_2_2; unsigned short x_2_2_3; struct AdjustedColor { unsigned char x_4_3_1; unsigned char x_4_3_2; unsigned int x_4_3_3 : 4; unsigned int x_4_3_4 : 1; unsigned int x_4_3_5 : 1; unsigned int x_4_3_6 : 1; } x_2_2_4; } x_1_1_2; } x1; }*)arg1;
+ (id)colorWithCsColour:(const struct CsColour { unsigned short x1; unsigned short x2; unsigned short x3; unsigned short x4; }*)arg1;
+ (id)colorWithRGBValue:(long)arg1;
+ (id)colorWithBGRValue:(long)arg1;
+ (id)stringForColor:(id)arg1;
+ (id)stringForSystemColorID:(int)arg1;
+ (id)colorWithSystemColorID:(int)arg1;
+ (id)colorWithBGR:(unsigned long)arg1;
+ (id)colorWithCalibratedHue:(float)arg1 saturation:(float)arg2 brightness:(float)arg3 alpha:(float)arg4;
+ (id)colorWithBinaryRed:(int)arg1 green:(int)arg2 blue:(int)arg3;
+ (id)colorWithBinaryRed:(int)arg1 green:(int)arg2 blue:(int)arg3 alpha:(int)arg4;
+ (id)colorWithDeviceRed:(float)arg1 green:(float)arg2 blue:(float)arg3 alpha:(float)arg4;
+ (id)randomColor;
+ (id)colorWithRed:(float)arg1 green:(float)arg2 blue:(float)arg3 alpha:(float)arg4;
+ (id)colorWithCGColor:(struct CGColor { }*)arg1;
+ (id)clearColor;
+ (id)whiteColor;
+ (id)colorWithCalibratedRed:(float)arg1 green:(float)arg2 blue:(float)arg3 alpha:(float)arg4;
+ (id)colorWithWhite:(float)arg1 alpha:(float)arg2;
+ (id)brownColor;
+ (id)blueColor;
+ (id)redColor;
+ (id)colorWithPatternImage:(id)arg1;
+ (id)blackColor;
+ (id)colorWithHue:(float)arg1 saturation:(float)arg2 brightness:(float)arg3 alpha:(float)arg4;
+ (id)purpleColor;
+ (id)orangeColor;
+ (id)yellowColor;
+ (id)magentaColor;
+ (id)cyanColor;
+ (id)greenColor;
+ (id)lightGrayColor;
+ (id)grayColor;

- (void)paintPath:(struct CGPath { }*)arg1 inContext:(struct CGContext { }*)arg2;
- (void)paintRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 inContext:(struct CGContext { }*)arg2;
- (float)luminance;
- (id)invertedColor;
- (id)grayscaleColor;
- (id)UIColor;
- (id)newBlendedColorWithFraction:(float)arg1 ofColor:(id)arg2;
- (float)p_rgbComponentWithIndex:(unsigned char)arg1;
- (void)getRGBBytes:(char *)arg1 :(char *)arg2 :(char *)arg3;
- (struct EshColor { struct Data { int x_1_1_1; union Value { struct RGB { unsigned char x_1_3_1; unsigned char x_1_3_2; unsigned char x_1_3_3; } x_2_2_1; unsigned short x_2_2_2; unsigned short x_2_2_3; struct AdjustedColor { unsigned char x_4_3_1; unsigned char x_4_3_2; unsigned int x_4_3_3 : 4; unsigned int x_4_3_4 : 1; unsigned int x_4_3_5 : 1; unsigned int x_4_3_6 : 1; } x_2_2_4; } x_1_1_2; } x1; })eshColor;
- (struct CsColour { unsigned short x1; unsigned short x2; unsigned short x3; unsigned short x4; })csColour;
- (id)colorWithShadeValue:(double)arg1;
- (id)colorWithTintValue:(double)arg1;
- (unsigned long)toBGR;
- (id)solidColoredPngImage;
- (id)newSolidColoredBitmap:(struct CGSize { float x1; float x2; })arg1;
- (id)blendedColorWithFraction:(float)arg1 ofColor:(id)arg2;
- (struct { unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; })ttColor;
- (struct CGColor { }*)cgColorRef;
- (BOOL)isEqualToColor:(id)arg1;
- (float)blueComponent;
- (float)greenComponent;
- (float)redComponent;
- (BOOL)isBlack;
- (BOOL)isOpaque;
- (id)initWithRed:(float)arg1 green:(float)arg2 blue:(float)arg3 alpha:(float)arg4;
- (id)initWithCGColor:(struct CGColor { }*)arg1;
- (float)alphaComponent;
- (id)colorWithAlphaComponent:(float)arg1;
- (void)getRed:(float*)arg1 green:(float*)arg2 blue:(float*)arg3 alpha:(float*)arg4;
- (struct CGColor { }*)CGColor;
- (void)set;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (id)copy;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithUIColor:(id)arg1;
- (id)initWithPatternImage:(id)arg1;
- (id)initWithHue:(float)arg1 saturation:(float)arg2 brightness:(float)arg3 alpha:(float)arg4;
- (id)initWithWhite:(float)arg1 alpha:(float)arg2;

@end
