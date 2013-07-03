/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class NSString;

@interface OADOle : NSObject  {
    BOOL mIconic;
    NSString *mCLSID;
    NSString *mAnsiUserType;
    NSString *mAnsiClipboardFormatName;
    unsigned long mWinClipboardFormat;
    NSString *mMacClipboardFormat;
    NSString *mAnsiProgID;
    NSString *mUnicodeUserType;
    NSString *mUnicodeClipboardFormatName;
    NSString *mUnicodeProgID;
    id mObject;
}

+ (BOOL)isCLSIDSupported:(id)arg1;
+ (BOOL)isProgIDSupported:(id)arg1;

- (id)unicodeProgID;
- (id)unicodeClipboardFormatName;
- (id)unicodeUserType;
- (id)ansiProgID;
- (id)macClipboardFormat;
- (unsigned long)winClipboardFormat;
- (id)ansiClipboardFormatName;
- (id)ansiUserType;
- (void)setIconic:(BOOL)arg1;
- (BOOL)iconic;
- (void)setUnicodeProgID:(id)arg1;
- (void)setUnicodeClipboardFormatName:(id)arg1;
- (void)setUnicodeUserType:(id)arg1;
- (void)setAnsiProgID:(id)arg1;
- (void)setAnsiClipboardFormatName:(id)arg1;
- (void)setMacClipboardFormat:(id)arg1;
- (void)setWinClipboardFormat:(unsigned long)arg1;
- (void)setAnsiUserType:(id)arg1;
- (void)setCLSID:(id)arg1;
- (id)CLSID;
- (id)init;
- (void)setObject:(id)arg1;
- (id)object;
- (void)dealloc;

@end