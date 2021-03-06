/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

@interface CPLayoutArea : CPRegion  {
    BOOL isFirstLayout;
}


- (void)addColumnBreaks;
- (void)setIsFirstLayout:(BOOL)arg1;
- (BOOL)isFirstLayout;
- (BOOL)isSimilarTo:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })layoutAreaBounds;
- (BOOL)isShapeRegion;
- (BOOL)isImageRegion;
- (void)setIsImageRegion:(BOOL)arg1;
- (BOOL)isRowRegion;
- (BOOL)isGraphicalRegion;
- (BOOL)isBoxRegion;
- (float)selectionBottom;
- (void)accept:(id)arg1;
- (id)init;
- (id)description;
- (id)properties;

@end
