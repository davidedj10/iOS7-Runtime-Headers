/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class <ABStyleProvider>, ABModel;

@interface ABAbstractViewController : UITableViewController  {
    ABModel *_model;
    <ABStyleProvider> *_styleProvider;
}

@property(retain) ABModel * model;
@property(retain) <ABStyleProvider> * styleProvider;


- (void)setModel:(id)arg1;
- (BOOL)supportedInterfaceOrientation:(int)arg1;
- (void)updateNavigationButtons;
- (id)peoplePickerNavigationController;
- (id)initWithModel:(id)arg1;
- (void)setStyleProvider:(id)arg1;
- (id)styleProvider;
- (id)model;
- (void)setAddressBook:(void*)arg1;
- (int)behavior;
- (void)dealloc;
- (void)didRotateFromInterfaceOrientation:(int)arg1;
- (void)_getRotationContentSettings:(struct { BOOL x1; BOOL x2; BOOL x3; BOOL x4; float x5; int x6; }*)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (BOOL)_allowsAutorotation;
- (void)setParentViewController:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (struct CGSize { float x1; float x2; })contentSize;

@end
