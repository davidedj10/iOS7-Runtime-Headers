/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@class VGLRenderState, VGLMesh, VKStylesheet, VKMapModel;

@interface VKGridModel : VKModelObject <VKMapLayer, VKStylesheetObserver> {
    VKMapModel *_mapModel;
    BOOL _simpleGridEnabled;
    VGLRenderState *_renderState;
    double _gridMix;
    struct { 
        double v[4][4]; 
    } _projection;
    struct { 
        double v[4][4]; 
    } _gridView;
    struct Vec2Imp<float> { 
        float x; 
        float y; 
    } _invFwidth;
    struct _VGLColor { 
        float r; 
        float g; 
        float b; 
        float a; 
    } _fillColor;
    struct _VGLColor { 
        float r; 
        float g; 
        float b; 
        float a; 
    } _lineColor;
    VGLMesh *_mesh;
}

@property(readonly) struct _VGLColor { float x1; float x2; float x3; float x4; } fillColor;
@property VKMapModel * mapModel;
@property BOOL simpleGridEnabled;
@property(readonly) VKStylesheet * stylesheet;

+ (BOOL)reloadOnStylesheetChange;

- (BOOL)simpleGridEnabled;
- (id)mapModel;
- (void)setSimpleGridEnabled:(BOOL)arg1;
- (void)stylesheetDidChange;
- (void)updateGridColor;
- (void)drawScene:(id)arg1 withContext:(id)arg2;
- (unsigned int)supportedRenderPasses;
- (void)layoutScene:(id)arg1 withContext:(id)arg2;
- (void)setMapModel:(id)arg1;
- (id)stylesheet;
- (unsigned int)mapLayerPosition;
- (struct _VGLColor { float x1; float x2; float x3; float x4; })fillColor;
- (id)init;
- (void)dealloc;
- (id).cxx_construct;

@end
