/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@class NSMutableDictionary, NSObject<OS_dispatch_queue>;

@interface VGLLayeredTextureOutputManager : NSObject  {
    NSObject<OS_dispatch_queue> *_textureQueue;
    NSMutableDictionary *_textureDictionary;
}

+ (id)sharedManager;

- (id)textureWithName:(id)arg1 style:(id)arg2 levelOfDetail:(unsigned int)arg3 scale:(float)arg4;
- (void)purge;
- (id)init;
- (void)dealloc;

@end