/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/PrivateFrameworks/DataDetectorsUI.framework/DataDetectorsUI
 */

@class NSOperationQueue, DDActionController;



@interface DDDetectionController : NSObject <UIActionSheetDelegate>
{
    NSOperationQueue *_fullScannerQueue;
    NSOperationQueue *_urlScannerQueue;
    struct __CFDictionary { } *_frameToOperationTable;
    struct __CFSet { } *_ignoreUIKitNotificationsFrames;
    struct dispatch_queue_s { } *_protectQueue;
    struct __CFDictionary { } *_frameToResultsTable;
    struct __CFDictionary { } *_frameToContextesTable;
    DDActionController *_actionController;
}

+ (id)tapAndHoldSchemes;
+ (id)sharedController;

- (void)cancelURLificationForFrame:(id)arg1;
- (void)resetResultsForFrame:(id)arg1;
- (void)performDefaultActionForURL:(id)arg1 forFrame:(id)arg2 inView:(id)arg3;
- (id)actionNamesForURL:(id)arg1 inFrame:(id)arg2;
- (void)performActionNumber:(NSInteger)arg1 forURL:(id)arg2 forFrame:(id)arg3 inView:(id)arg4 interactionDelegate:(id)arg5;
- (void)performActionNumber:(NSInteger)arg1 forURL:(id)arg2 forFrame:(id)arg3 withPopoverController:(id)arg4 interactionDelegate:(id)arg5;
- (BOOL)shouldImmediatelyShowActionSheetForURL:(id)arg1 forFrame:(id)arg2;
- (void)startURLificationForFrame:(id)arg1 detectedTypes:(NSUInteger)arg2;
- (void)frameWillBeRemoved:(id)arg1;
- (id)init;
- (void)dealloc;
- (void)setResults:(struct __CFArray { }*)arg1 forFrame:(id)arg2;
- (void)setContext:(id)arg1 forFrame:(id)arg2;
- (void)_enqueueOperationAndRelease:(id)arg1;
- (void)_doURLificationOnWebThreadAndRelease:(id)arg1;
- (id)_newOperationForFrame:(id)arg1;
- (void)startURLificationForFrame:(id)arg1 detectedTypes:(NSUInteger)arg2 disableLayoutCountCheck:(BOOL)arg3;
- (void)setIgnoreUIKitNotifications:(BOOL)arg1 forFrame:(id)arg2;
- (void)performDefaultActionForURL:(id)arg1 inFrame:(id)arg2;
- (struct __DDResult { }*)_resultForURL:(id)arg1 forFrame:(id)arg2 context:(id*)arg3;

@end