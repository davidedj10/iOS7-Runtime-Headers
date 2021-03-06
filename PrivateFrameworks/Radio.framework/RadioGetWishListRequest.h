/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/Radio.framework/Radio
 */

@class SSURLConnectionRequest;

@interface RadioGetWishListRequest : RadioRequest  {
    SSURLConnectionRequest *_request;
    unsigned int _maxNumberOfTracks;
}

@property unsigned int maxNumberOfTracks;


- (void)setMaxNumberOfTracks:(unsigned int)arg1;
- (unsigned int)maxNumberOfTracks;
- (void)startWithCompletionHandler:(id)arg1;
- (id)init;
- (void).cxx_destruct;
- (void)cancel;

@end
