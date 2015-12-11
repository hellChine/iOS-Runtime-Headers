/* Generated by RuntimeBrowser.
 */

@protocol AFUISiriSessionLocalDelegate <NSObject>

@required

- (void)siriSession:(AFUISiriSession *)arg1 didChangeDialogPhase:(AFUIDialogPhase *)arg2;
- (void)siriSession:(AFUISiriSession *)arg1 didChangeToState:(int)arg2;
- (void)siriSession:(void *)arg1 didReceiveDeviceUnlockRequestAndCancelRequest:(void *)arg2 withCompletion:(void *)arg3; // needs 3 arg types, found 8: AFUISiriSession *, BOOL, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, void*
- (void)siriSession:(void *)arg1 didReceiveDeviceUnlockRequestWithCompletion:(void *)arg2; // needs 2 arg types, found 7: AFUISiriSession *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, void*
- (BOOL)siriSessionCanEnd:(AFUISiriSession *)arg1;
- (void)siriSessionDidEnd:(AFUISiriSession *)arg1;
- (void)siriSessionDidReceiveDelayedActionCancelCommand:(SAUIDelayedActionCancelCommand *)arg1;
- (void)siriSessionDidReceiveDelayedActionCommand:(SAUIDelayedActionCommand *)arg1;
- (void)siriSessionDidResetContext:(AFUISiriSession *)arg1;
- (void)siriSessionRecordingPreparationHasFinished:(AFUISiriSession *)arg1;
- (void)siriSessionWillEnd:(AFUISiriSession *)arg1;

@end