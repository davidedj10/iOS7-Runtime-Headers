/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class GEOURLConnectionSession;

@interface GEOURLConnection : NSObject  {
    struct _CFURLConnection { } *_cfConnection;
    id _delegate;
    GEOURLConnectionSession *_connectionSession;
}


- (void)connectionDidTerminate;
- (void)connectionDidFailWithError:(id)arg1;
- (void)connectionDidFinishLoading;
- (void)connectionDidReceiveData:(id)arg1;
- (void)connectionDidReceiveResponse:(struct _CFURLResponse { }*)arg1;
- (id)initWithCFRequest:(struct _CFURLRequest { }*)arg1 delegate:(id)arg2 usingSession:(id)arg3;
- (void)dealloc;
- (void)cancel;

@end
