/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@interface QLPreviewTransitionAnimatorManager : NSObject <UIViewControllerTransitioningDelegate, UINavigationControllerDelegate> {
}

+ (id)sharedManager;

- (id)animatorForShowing:(BOOL)arg1 previewController:(id)arg2;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;

@end
