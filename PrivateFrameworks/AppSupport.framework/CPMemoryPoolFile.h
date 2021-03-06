/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
 */

@interface CPMemoryPoolFile : NSObject  {
    struct _opaque_pthread_mutex_t { 
        long __sig; 
        BOOL __opaque[40]; 
    } _mutex;
    int _fd;
    char *_slots;
    unsigned long _slotCount;
    unsigned long _slotLength;
    struct __CFBitVector { } *_usedSlots;
    struct __CFAllocator { } *_deallocator;
}


- (void)returnSlot:(void*)arg1;
- (id)nextSlotWithBytes:(const void*)arg1 length:(unsigned long)arg2;
- (id)initWithLabel:(const char *)arg1 slotCount:(unsigned long)arg2 slotLength:(unsigned long)arg3;
- (void)dealloc;

@end
