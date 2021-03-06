/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class AVAsset, PLMoviePlayerView, UIAlertView, AVPlayer, AVPlayerItem, PLTVOutWindow, AVAudioMix, NSString, <PLMoviePlayerControllerDelegate>;

@interface PLMoviePlayerController : NSObject  {
    AVAsset *_asset;
    AVAudioMix *_audioMix;
    AVPlayerItem *_playerItem;
    AVPlayer *_player;
    PLMoviePlayerView *_view;
    UIAlertView *_alertView;
    PLTVOutWindow *_tvOutWindow;
    BOOL _hasPendingTime;
    double _pendingTime;
    unsigned int _pendingTimeSnapOption;
    BOOL _forceUpdateCurrentTime;
    BOOL _isExternalPlayback;
    BOOL _exited;
    double _lastSetCurrentTimeTime;
    BOOL _isSeeking;
    unsigned int _backgroundTaskId;
    BOOL _audioSessionActive;
    NSString *_originalAudioCategory;
    BOOL _TVOutEnabled;
    BOOL _forceDisableTVOut;
    BOOL _isPreparedForPlayback;
    BOOL _isActiveController;
    <PLMoviePlayerControllerDelegate> *_delegate;
    unsigned int _bufferingState;
    unsigned int _playbackState;
    NSString *_audioTimePitchAlgorithm;
}

@property <PLMoviePlayerControllerDelegate> * delegate;
@property(readonly) AVPlayer * player;
@property(readonly) PLMoviePlayerView * view;
@property(copy) NSString * audioTimePitchAlgorithm;
@property(readonly) float playbackRate;
@property(readonly) unsigned int playbackState;
@property(readonly) double duration;
@property double currentTime;
@property(readonly) unsigned int bufferingState;
@property(readonly) BOOL isPreparedForPlayback;
@property BOOL TVOutEnabled;
@property(setter=_setForceDisableTVOut:) BOOL forceDisableTVOut;
@property BOOL isActiveController;

+ (BOOL)_isNetworkSupportedPath:(id)arg1;
+ (BOOL)_isStreamableAsset:(id)arg1;

- (BOOL)forceDisableTVOut;
- (void)_playbackFailedWithError:(id)arg1;
- (void)setIsActiveController:(BOOL)arg1;
- (BOOL)isActiveController;
- (void)_displayVideoView;
- (void)_setForceDisableTVOut:(BOOL)arg1;
- (void)_pausePlaybackForNotification;
- (void)_restoreTVOutVideoIfNecessary;
- (void)_setPlayerAudioSessionActive:(BOOL)arg1;
- (void)_delayedUpdateFromPendingTime;
- (void)setCurrentTime:(double)arg1 timeSnapOption:(unsigned int)arg2 forceUpdate:(BOOL)arg3;
- (void)_playerRateDidChange:(id)arg1;
- (void)_dispatchOnMainThreadWithBlock:(id)arg1;
- (void)_streamUnlikelyToKeepUp;
- (void)_streamLikelyToKeepUp;
- (void)_streamBufferFull;
- (void)_streamRanDry;
- (void)_playerItemFailedToPlayToEnd:(id)arg1;
- (void)_didLoadValueOfKey:(id)arg1 forAsset:(id)arg2;
- (void)_updateFromPendingTime;
- (void)_playerItemFailedToPlayToEndNotification:(id)arg1;
- (void)_playerItemDidReachEndNotification:(id)arg1;
- (void)_loadAsset:(id)arg1;
- (void)_setPlaybackState:(unsigned int)arg1;
- (void)_updateAudioSession;
- (void)_tearDownPlayer;
- (void)_setPlayerItem:(id)arg1;
- (void)_setupPlayer;
- (void)requestToBecomeActiveController;
- (void)playFromBeginning;
- (BOOL)isExternalPlayback;
- (void)playDueToEnoughData;
- (void)setAsset:(id)arg1 audioMix:(id)arg2 startTime:(double)arg3;
- (BOOL)isPreparedForPlayback;
- (id)assetForMovieWithPath:(id)arg1 options:(id)arg2;
- (float)playbackRate;
- (void)pauseDueToInsufficientData;
- (void)requestToResignAsActiveController;
- (void)didBecomeActiveController;
- (void)willResignAsActiveController;
- (void)setAudioTimePitchAlgorithm:(id)arg1;
- (void)_tearDownTVOutWindow;
- (void)_updateTVOutEnabled;
- (void)_setupTVOutWindow;
- (void)_updateDisableAirPlayMirroringDuringPlayback;
- (void)_updateBackgroundViewInformation;
- (void)tearDownTVOutWindow;
- (void)_screenDidDisconnect:(id)arg1;
- (void)_screenDidConnect:(id)arg1;
- (id)_playerKeysToObserve;
- (void)_serverConnectionDidDie:(id)arg1;
- (void)_setBufferingState:(unsigned int)arg1;
- (void)_willResignNotification:(id)arg1;
- (void)_willBeginSuspendAnimationNotification:(id)arg1;
- (void)_willSuspendNotification:(id)arg1;
- (void)_exitPlayer:(int)arg1;
- (void)setCurrentTime:(double)arg1 timeSnapOption:(unsigned int)arg2;
- (BOOL)videoOutActive;
- (void)_didEnterBackgroundNotification:(id)arg1;
- (void)_willEnterForegroundNotification:(id)arg1;
- (void)setTVOutEnabled:(BOOL)arg1;
- (BOOL)TVOutEnabled;
- (unsigned int)bufferingState;
- (void)_simpleRemoteNotification:(id)arg1;
- (void)play;
- (unsigned int)playbackState;
- (void)setCurrentTime:(double)arg1;
- (double)currentTime;
- (void)_registerForNotifications;
- (id)audioTimePitchAlgorithm;
- (BOOL)_allowsExternalPlayback;
- (void)_unregisterForNotifications;
- (id)player;
- (id)init;
- (void)setDelegate:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (void)setAsset:(id)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (id)view;
- (void)pause;
- (double)duration;
- (void)stop;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;

@end
