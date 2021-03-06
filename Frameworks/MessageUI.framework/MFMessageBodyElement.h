/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@class MFMessageBodyParser, NSArray;

@interface MFMessageBodyElement : NSObject <MFMessageBodyElement_Private> {
    MFMessageBodyParser *_parser;
    NSArray *_nodes;
    unsigned int _quoteLevel;
    unsigned int _externalRetainCount;
    int _validAttributes;
    int _attributes;
}

@property MFMessageBodyParser * parser;
@property(retain) NSArray * nodes;


- (unsigned int)getQuoteLevel;
- (id)copyConsumableNodesAndAppendInnerTextToStringAccumulator:(id)arg1;
- (int)valueForAttributes:(int)arg1;
- (void)releaseExternally;
- (id)retainExternally;
- (void)_setValue:(int)arg1 forAttributes:(int)arg2;
- (BOOL)_hasValueForAttributes:(int)arg1;
- (void)setNodes:(id)arg1;
- (BOOL)isExternallyRetained;
- (void)setParser:(id)arg1;
- (unsigned int)quoteLevel;
- (id)nodes;
- (void)reset;
- (id)parser;
- (id)init;
- (void)dealloc;
- (id)description;

@end
