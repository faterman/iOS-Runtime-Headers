/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameCenterPrivateUI.framework/GameCenterPrivateUI
 */

@class GKCollectionViewDataSource;

@interface GKSearchBar : UISearchBar {
    GKCollectionViewDataSource *_dataSource;
    long long _sectionIndex;
}

@property(retain) GKCollectionViewDataSource * dataSource;
@property long long sectionIndex;

- (id)dataSource;
- (void)dealloc;
- (long long)sectionIndex;
- (void)setDataSource:(id)arg1;
- (void)setSectionIndex:(long long)arg1;

@end