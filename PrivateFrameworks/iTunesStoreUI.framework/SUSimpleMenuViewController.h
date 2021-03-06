/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class NSString, NSArray;

@interface SUSimpleMenuViewController : SUMenuViewController  {
    NSString *_cancelButtonTitle;
    NSArray *_titles;
}

@property(copy) NSArray * titles;
@property(copy) NSString * cancelButtonTitle;


- (id)cancelButtonTitle;
- (void)setCancelButtonTitle:(id)arg1;
- (id)initWithTitles:(id)arg1;
- (void)_cancelAction:(id)arg1;
- (BOOL)isMenuItemEnabledAtIndex:(int)arg1;
- (id)titleOfMenuItemAtIndex:(int)arg1;
- (int)numberOfMenuItems;
- (void)reloadContentSizeForViewInPopover;
- (void)dealloc;
- (id)titles;
- (void)setTitles:(id)arg1;

@end
