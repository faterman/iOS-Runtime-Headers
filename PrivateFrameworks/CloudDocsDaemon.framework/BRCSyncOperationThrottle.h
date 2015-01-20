/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@class NSString;

@interface BRCSyncOperationThrottle : NSObject <NSSecureCoding> {
    NSString *_containerID;
    double _delay;
    double _nextTry;
}

@property(retain) NSString * containerID;
@property(readonly) double delay;
@property(readonly) double nextTry;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)clear;
- (id)containerID;
- (double)delay;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithContainerID:(id)arg1;
- (double)nextTry;
- (void)setContainerID:(id)arg1;
- (void)updateAfterSchedulingTask;
- (void)updateAfterSchedulingTaskWithMinimumDelay:(double)arg1;
- (void)updateForError:(id)arg1;

@end