/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@class VKAnchor, VKScreenCanvas, VKLayoutContext;

@interface VKAnchorWrapper : NSObject <VKAnchorDelegate> {
    VKAnchor *_anchor;
    BOOL _followsTerrain;
    struct CGPoint { 
        float x; 
        float y; 
    } _screenPointInCanvas;
    VKLayoutContext *_lastLayoutContext;
    struct { 
        double latitude; 
        double longitude; 
    } _lastCoordinate;
    BOOL _isUpdating;
    VKScreenCanvas *_canvas;
}

@property(readonly) struct { double x1; double x2; } coordinate;
@property BOOL followsTerrain;
@property VKScreenCanvas * canvas;


- (void)_updateCachedPointWithContext:(id)arg1;
- (id)_anchorWithContext:(id)arg1;
- (void)anchorWorldPointDidChange:(void*)arg1;
- (BOOL)followsTerrain;
- (void)layoutWithContext:(id)arg1;
- (id)canvas;
- (void)updateIfNeeded;
- (void)setCanvas:(id)arg1;
- (void)setFollowsTerrain:(BOOL)arg1;
- (struct CGPoint { float x1; float x2; })pointInLayer:(id)arg1;
- (struct { double x1; double x2; })coordinate;
- (void)dealloc;

@end