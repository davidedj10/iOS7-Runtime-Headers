/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@class NSArray, NSString, NSDictionary, <SSVSAPContext>;

@interface SSVPlatformContext : NSObject <NSCopying> {
    NSString *_lookupURLString;
    <SSVSAPContext> *_sapContext;
    NSArray *_signedHeaders;
    NSArray *_signedQueryParameters;
}

@property(readonly) NSDictionary * bagDictionary;
@property(readonly) NSString * lookupURLString;
@property(readonly) NSArray * signedHeaders;
@property(readonly) NSArray * signedQueryParameters;
@property(retain) <SSVSAPContext> * SAPContext;


- (void)setSAPContext:(id)arg1;
- (id)bagDictionary;
- (id)initWithBagDictionary:(id)arg1;
- (id)signedQueryParameters;
- (id)signedHeaders;
- (id)SAPContext;
- (id)lookupURLString;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end
