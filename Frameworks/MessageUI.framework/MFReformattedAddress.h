/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@class NSString;

@interface MFReformattedAddress : NSObject  {
    NSString *_address;
    struct _NSRange { 
        unsigned int location; 
        unsigned int length; 
    } _middleTruncationRange;
}

@property(readonly) NSString * localPart;
@property(readonly) NSString * domainPart;
@property struct _NSRange { unsigned int x1; unsigned int x2; } middleTruncationRange;


- (id)domainPart;
- (struct _NSRange { unsigned int x1; unsigned int x2; })middleTruncationRange;
- (void)setMiddleTruncationRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (id)localPart;
- (float)widthWithFontSize:(float)arg1 maximumWidth:(float)arg2 options:(unsigned int)arg3;
- (id)attributedStringWithFontSize:(float)arg1 maximumWidth:(float)arg2 options:(unsigned int)arg3;
- (id)initWithAddress:(id)arg1;
- (void)dealloc;
- (id)description;

@end
