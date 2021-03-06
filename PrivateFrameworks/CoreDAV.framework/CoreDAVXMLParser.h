/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@class CoreDAVItem, CoreDAVErrorItem, CoreDAVXMLElementGenerator, NSError, NSSet, NSURL;

@interface CoreDAVXMLParser : NSXMLParser <CoreDAVResponseBodyParser> {
    CoreDAVXMLElementGenerator *_rootElementGenerator;
    CoreDAVXMLElementGenerator *_rootErrorGenerator;
    NSSet *_parseHints;
    NSURL *_baseURL;
}

@property(retain) NSSet * parseHints;
@property(retain) NSURL * baseURL;
@property(readonly) CoreDAVItem * rootElement;
@property(readonly) CoreDAVErrorItem * rootError;
@property(readonly) NSError * parserError;
@property(retain) CoreDAVXMLElementGenerator * rootElementGenerator;
@property(retain) CoreDAVXMLElementGenerator * rootErrorGenerator;

+ (BOOL)canHandleContentType:(id)arg1;

- (id)rootElementGenerator;
- (void)setRootElementGenerator:(id)arg1;
- (void)setRootErrorGenerator:(id)arg1;
- (id)rootErrorGenerator;
- (id)parseHints;
- (id)rootError;
- (BOOL)processData:(id)arg1 forTask:(id)arg2;
- (id)rootElement;
- (void)setParseHints:(id)arg1;
- (id)initWithRootElementNameSpace:(id)arg1 name:(id)arg2 parseClass:(Class)arg3 baseURL:(id)arg4;
- (void)setBaseURL:(id)arg1;
- (id)baseURL;
- (void)dealloc;
- (id)initWithData:(id)arg1;

@end
