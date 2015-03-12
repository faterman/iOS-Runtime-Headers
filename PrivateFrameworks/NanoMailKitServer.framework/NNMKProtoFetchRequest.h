/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
 */

@class NSString;

@interface NNMKProtoFetchRequest : PBRequest <NSCopying> {
    struct { 
        unsigned int fullSyncVersion : 1; 
        unsigned int manuallyTriggered : 1; 
    NSString *_conversationId;
    unsigned int _fullSyncVersion;
    } _has;
    BOOL _manuallyTriggered;
}

@property(retain) NSString * conversationId;
@property unsigned int fullSyncVersion;
@property(readonly) BOOL hasConversationId;
@property BOOL hasFullSyncVersion;
@property BOOL hasManuallyTriggered;
@property BOOL manuallyTriggered;

- (void).cxx_destruct;
- (id)conversationId;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)fullSyncVersion;
- (BOOL)hasConversationId;
- (BOOL)hasFullSyncVersion;
- (BOOL)hasManuallyTriggered;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (BOOL)manuallyTriggered;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setConversationId:(id)arg1;
- (void)setFullSyncVersion:(unsigned int)arg1;
- (void)setHasFullSyncVersion:(BOOL)arg1;
- (void)setHasManuallyTriggered:(BOOL)arg1;
- (void)setManuallyTriggered:(BOOL)arg1;
- (void)writeTo:(id)arg1;

@end