/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UITextInputTraits, UIView;

@interface UIKeyboard : UIView <UIKeyboardImplGeometryDelegate> {
    UIView *m_snapshot;
    UITextInputTraits *m_defaultTraits;
    BOOL m_typingDisabled;
    BOOL m_minimized;
    BOOL m_respondingToImplGeometryChange;
    int m_orientation;
    int m_idiom;
}

@property BOOL caretBlinks;
@property BOOL caretVisible;
@property int keyboardIdiom;
@property BOOL typingEnabled;
@property(getter=isMinimized) BOOL minimized;
@property BOOL showsCandidatesInline;

+ (BOOL)splitKeyboardEnabled;
+ (BOOL)shouldMinimizeForHardwareKeyboard;
+ (BOOL)respondsToProxGesture;
+ (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })defaultFrameForInterfaceOrientation:(int)arg1;
+ (void)initImplementationNow;
+ (void)_clearActiveKeyboard;
+ (void)removeAllDynamicDictionaries;
+ (BOOL)isInHardwareKeyboardMode;
+ (struct CGSize { float x1; float x2; })keyboardSizeForInterfaceOrientation:(int)arg1;
+ (struct CGSize { float x1; float x2; })defaultSizeForInterfaceOrientation:(int)arg1;
+ (BOOL)isOnScreen;
+ (struct CGSize { float x1; float x2; })sizeForInterfaceOrientation:(int)arg1;
+ (id)activeKeyboard;
+ (struct CGSize { float x1; float x2; })defaultSize;

- (BOOL)isActive;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)removeFromSuperview;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)displayLayer:(id)arg1;
- (void)setNeedsDisplay;
- (int)interfaceOrientation;
- (void)dealloc;
- (id)delegate;
- (BOOL)_isAutomaticKeyboard;
- (void)_acceptCurrentCandidate;
- (void)_setInputMode:(id)arg1;
- (id)_typeCharacter:(id)arg1 withError:(struct CGPoint { float x1; float x2; })arg2 shouldTypeVariants:(BOOL)arg3 baseKeyForVariants:(BOOL)arg4;
- (id)_touchPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)_changeToKeyplane:(id)arg1;
- (id)_keyplaneNamed:(id)arg1;
- (id)_keyplaneForKey:(id)arg1;
- (id)_baseKeyForRepresentedString:(id)arg1;
- (void)manualKeyboardWasOrderedOut;
- (void)manualKeyboardWillBeOrderedOut;
- (void)manualKeyboardWasOrderedIn;
- (void)manualKeyboardWillBeOrderedIn;
- (void)setKeyboardIdiom:(int)arg1;
- (void)setShowsCandidatesInline:(BOOL)arg1;
- (BOOL)showsCandidatesInline;
- (id)targetWindow;
- (void)syncMinimizedStateToHardwareKeyboardAttachedState;
- (void)setTypingEnabled:(BOOL)arg1;
- (BOOL)typingEnabled;
- (id)defaultTextInputTraits;
- (BOOL)hasAutocorrectPrompt;
- (id)initWithDefaultSize;
- (struct UIPeripheralAnimationGeometry { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGPoint { float x_2_1_1; float x_2_1_2; } x2; struct CGRect { struct CGPoint { float x_1_2_1; float x_1_2_2; } x_3_1_1; struct CGSize { float x_2_2_1; float x_2_2_2; } x_3_1_2; } x3; struct CGAffineTransform { float x_4_1_1; float x_4_1_2; float x_4_1_3; float x_4_1_4; float x_4_1_5; float x_4_1_6; } x4; float x5; })geometryForImplHeightDelta:(float)arg1;
- (void)maximize;
- (void)minimize;
- (void)keyboardMinMaximized:(id)arg1 finished:(id)arg2 context:(id)arg3;
- (struct UIPeripheralAnimationGeometry { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGPoint { float x_2_1_1; float x_2_1_2; } x2; struct CGRect { struct CGPoint { float x_1_2_1; float x_1_2_2; } x_3_1_1; struct CGSize { float x_2_2_1; float x_2_2_2; } x_3_1_2; } x3; struct CGAffineTransform { float x_4_1_1; float x_4_1_2; float x_4_1_3; float x_4_1_4; float x_4_1_5; float x_4_1_6; } x4; float x5; })geometryForMinimize:(BOOL)arg1;
- (void)takeSnapshot;
- (void)clearSnapshot;
- (void)autoAdjustOrientationForSize:(struct CGSize { float x1; float x2; })arg1;
- (void)autoAdjustOrientation;
- (int)_positionInCandidateList:(id)arg1;
- (BOOL)_hasCandidates;
- (id)_getAutocorrection;
- (void)_setAutocorrects:(BOOL)arg1;
- (id)_getLocalizedInputMode;
- (id)_getCurrentKeyplaneName;
- (id)_getCurrentKeyboardName;
- (BOOL)caretVisible;
- (BOOL)returnKeyEnabled;
- (void)setDefaultTextInputTraits:(id)arg1;
- (void)setCorrectionLearningAllowed:(BOOL)arg1;
- (BOOL)caretBlinks;
- (BOOL)canDismiss;
- (void)geometryChangeDone:(BOOL)arg1;
- (void)setMinimized:(BOOL)arg1;
- (void)prepareForGeometryChange;
- (void)implBoundsHeightChangeDone:(float)arg1 suppressNotification:(BOOL)arg2;
- (void)prepareForImplBoundsHeightChange:(float)arg1 suppressNotification:(BOOL)arg2;
- (void)resizeForKeyplaneSize:(struct CGSize { float x1; float x2; })arg1;
- (int)keyboardIdiom;
- (void)setReturnKeyEnabled:(BOOL)arg1;
- (void)setCaretVisible:(BOOL)arg1;
- (BOOL)isMinimized;
- (BOOL)shouldSaveMinimizationState;
- (void)removeAutocorrectPrompt;
- (void)acceptAutocorrection;
- (int)textEffectsVisibilityLevel;
- (void)_setRenderConfig:(id)arg1;
- (void)activate;
- (void)setCaretBlinks:(BOOL)arg1;
- (void)updateLayout;
- (void)deactivate;
- (BOOL)pointInside:(struct CGPoint { float x1; float x2; })arg1 forEvent:(struct __GSEvent { }*)arg2;
- (void)movedFromSuperview:(id)arg1;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)_deactivateForBackgrounding;
- (BOOL)pointInside:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (id)hitTest:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;

@end
