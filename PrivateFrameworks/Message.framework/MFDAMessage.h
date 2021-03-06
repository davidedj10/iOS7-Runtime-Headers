/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/Message.framework/Message
 */

@class DAMailMessage, NSString, MFMailboxUid, MFMessage;

@interface MFDAMessage : MFMailMessage  {
    DAMailMessage *_DAMailMessage;
    MFMessage *_rfc822CreatedMessage;
    MFMailboxUid *_mailbox;
    NSString *_externalConversationID;
}

@property(readonly) DAMailMessage * DAMailMessage;


- (id)initWithDAMailMessage:(id)arg1 mailbox:(id)arg2;
- (id)DAMailMessage;
- (id)remoteMailboxURL;
- (id)externalConversationID;
- (id)mailbox;
- (id)remoteID;
- (id)headersIfAvailable;
- (unsigned long long)messageFlags;
- (BOOL)messageData:(id*)arg1 messageSize:(unsigned int*)arg2 isComplete:(BOOL*)arg3 downloadIfNecessary:(BOOL)arg4;
- (id)messageBody;
- (unsigned int)messageSize;
- (id)headers;
- (void)dealloc;

@end
