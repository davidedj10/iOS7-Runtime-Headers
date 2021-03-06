/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterUI.framework/GameCenterUI
 */

@class NSArray, GKButton, UIActivityIndicatorView, GKLabel, UIImageView, UIView, GKStoreItemInternal, GKOpenGraphNode;

@interface GKFacebookLikeButton : UIView  {
    GKStoreItemInternal *_storeItem;
    GKButton *_button;
    GKLabel *_labelView;
    UIImageView *_logoView;
    UIActivityIndicatorView *_spinner;
    UIView *_containerView;
    GKOpenGraphNode *_openGraphNode;
    NSArray *_replaceableConstraints;
    UIView *_containerSpacerLeft;
    UIView *_containerSpacerRight;
}

@property(retain) GKStoreItemInternal * storeItem;
@property(retain) GKButton * button;
@property(retain) GKLabel * labelView;
@property(retain) UIImageView * logoView;
@property(retain) UIActivityIndicatorView * spinner;
@property(retain) UIView * containerView;
@property(retain) GKOpenGraphNode * openGraphNode;
@property(retain) NSArray * replaceableConstraints;
@property(retain) UIView * containerSpacerLeft;
@property(retain) UIView * containerSpacerRight;


- (void)setContainerSpacerRight:(id)arg1;
- (id)containerSpacerRight;
- (void)setContainerSpacerLeft:(id)arg1;
- (id)containerSpacerLeft;
- (void)setSpinner:(id)arg1;
- (void)setLogoView:(id)arg1;
- (id)logoView;
- (void)setLabelView:(id)arg1;
- (id)labelView;
- (void)setOpenGraphNode:(id)arg1;
- (id)openGraphNode;
- (void)configureButtonWithTitle:(id)arg1 state:(unsigned int)arg2 imageName:(id)arg3;
- (void)observeEnterForegroundNotification:(id)arg1;
- (void)updateContent;
- (void)createSpinner;
- (void)createLabelView;
- (void)createLogoView;
- (void)createButton;
- (void)applyConstraints;
- (void)setReplaceableConstraints:(id)arg1;
- (id)replaceableConstraints;
- (void)setStoreItem:(id)arg1;
- (id)storeItem;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)button;
- (BOOL)isEnabled;
- (void)dealloc;
- (id)spinner;
- (void)setContainerView:(id)arg1;
- (void)buttonPressed:(id)arg1;
- (id)viewForBaselineLayout;
- (id)containerView;
- (void)setButton:(id)arg1;

@end
