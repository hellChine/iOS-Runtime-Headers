/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@interface QLRemoteItemViewController : QLItemViewController <QLPrintingProtocol> {
    NSLayoutConstraint * _bottomConstraint;
    NSExtension * _extension;
    BOOL  _fullScreen;
    NSDictionary * _hostConfiguration;
    <QLPrintingProtocol> * _printer;
    _UIRemoteViewController * _remoteViewController;
    id  _request;
    QLRemotePreviewHostContext * _serviceContext;
    NSLayoutConstraint * _topConstraint;
    BOOL  _visible;
}

- (void).cxx_destruct;
- (BOOL)canEnterFullScreen;
- (BOOL)canSwipeToDismiss;
- (void)dealloc;
- (void)loadPreviewControllerWithPreviewItem:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)numberOfPagesWithSize:(struct CGSize { float x1; float x2; })arg1 completionHandler:(id /* block */)arg2;
- (void)pdfDataForPageAtIndex:(int)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)prepareForDrawingPages:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (void)previewBecameFullScreen:(BOOL)arg1 animated:(BOOL)arg2;
- (void)previewDidAppear:(BOOL)arg1;
- (void)previewDidDisappear:(BOOL)arg1;
- (void)previewWillAppear:(BOOL)arg1;
- (void)previewWillDisappear:(BOOL)arg1;
- (void)previewWillFinishAppearing;
- (id)printer;
- (void)viewServiceDidTerminateWithError:(id)arg1;

@end