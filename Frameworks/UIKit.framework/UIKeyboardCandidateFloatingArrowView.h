/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIButton;

@interface UIKeyboardCandidateFloatingArrowView : UICollectionReusableView  {
    UIButton *_arrowButton;
}

@property(retain) UIButton * arrowButton;

+ (id)collectionViewKind;
+ (id)reuseIdentifier;

- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)dealloc;
- (void)setArrowButton:(id)arg1;
- (void)updateArrow;
- (void)applyLayoutAttributes:(id)arg1;
- (id)arrowButton;
- (void)prepareForReuse;

@end
