/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@interface PSAboutHTMLSheetViewController : UIViewController <UIWebViewDelegate> {
}

+ (void)presentAboutSheetTitled:(id)arg1 HTMLContent:(id)arg2 fromViewController:(id)arg3;

- (void)setHTMLContent:(id)arg1 isFragment:(BOOL)arg2;
- (void)donePressed;
- (void)viewDidBecomeVisible;
- (void)dealloc;
- (BOOL)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(int)arg3;
- (void)loadView;

@end
