/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIPrintPreviewViewController : UICollectionViewController <PageRangeDelegate, UICollectionViewDelegate, UIDocumentInteractionControllerDelegate, UINavigationControllerDelegate, UIScrollViewDelegate, UIViewControllerPreviewingDelegate_Private> {
    BOOL _accessibilityScrollTriggered;
    NSMutableArray *_arrayOfPageImages;
    UIPrintPaper *_destinationPaper;
    UIDocumentInteractionController *_documentInteractionController;
    BOOL _grayscalePreview;
    int _initialPageIndexToCenter;
    int _numPages;
    int _pageIndexOnPageLabel;
    UILabel *_pageLabel;
    UIView *_pageLabelBackgroundView;
    NSLayoutConstraint *_pageLabelBadgeVerticalPositionConstraint;
    NSObject<OS_dispatch_queue> *_pageRendererQueue;
    struct CGSize { 
        float width; 
        float height; 
    } _pageSize;
    struct CGPDFDocument { } *_pdfDocRef;
    NSString *_pdfPassword;
    NSURL *_pdfURL;
    UIPrintPanelViewController *_printPanelViewController;
    NSURL *_quickLookPDFURL;
    BOOL _scaleUpOnDestinationPaper;
    NSURL *_sharePDFFileURL;
    id previousNavigationControllerDelegate;
}

@property (retain) NSMutableArray *arrayOfPageImages;
@property (readonly) int currentCenterPageIndex;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain) UIPrintPaper *destinationPaper;
@property BOOL grayscalePreview;
@property (readonly) unsigned int hash;
@property int initialPageIndexToCenter;
@property (readonly) int numPages;
@property (retain) NSString *pdfPassword;
@property (retain) NSURL *pdfURL;
@property (retain) NSURL *quickLookPDFURL;
@property BOOL scaleUpOnDestinationPaper;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (int)_adjustScrollDirectionForLayout:(int)arg1;
- (BOOL)accessibilityScroll:(int)arg1;
- (void)addAllPages:(id)arg1;
- (void)addPage:(id)arg1 forPageIndex:(int)arg2;
- (id)arrayOfPageImages;
- (BOOL)canAddAllPages:(id)arg1;
- (BOOL)canAddPage:(id)arg1 forPageIndex:(int)arg2;
- (BOOL)canBecomeFirstResponder;
- (BOOL)canRemovePage:(id)arg1 forPageIndex:(int)arg2;
- (BOOL)canSetEndPage:(id)arg1 forPageIndex:(int)arg2;
- (BOOL)canSetStartPage:(id)arg1 forPageIndex:(int)arg2;
- (BOOL)canShowMenuBar;
- (BOOL)collectionView:(id)arg1 canPerformAction:(SEL)arg2 forItemAtIndexPath:(id)arg3 withSender:(id)arg4;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(int)arg3;
- (struct CGSize { float x1; float x2; })collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2;
- (BOOL)collectionView:(id)arg1 shouldShowMenuForItemAtIndexPath:(id)arg2;
- (int)currentCenterPageIndex;
- (void)dealloc;
- (id)destinationPaper;
- (void)didReceiveMemoryWarning;
- (void)documentInteractionController:(id)arg1 didEndSendingToApplication:(id)arg2;
- (id)documentInteractionControllerViewControllerForPreview:(id)arg1;
- (id)excludedActivityTypesForDocumentInteractionController:(id)arg1;
- (id)getPageImageForPage:(int)arg1;
- (BOOL)grayscalePreview;
- (id)indexPathNearestToPointInCollectionView:(struct CGPoint { float x1; float x2; })arg1;
- (id)initWithPageSize:(struct CGSize { float x1; float x2; })arg1 numberOfPages:(int)arg2 viewSize:(struct CGSize { float x1; float x2; })arg3 printPanelViewController:(id)arg4;
- (int)initialPageIndexToCenter;
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(BOOL)arg3;
- (int)numPages;
- (int)numberOfSectionsInCollectionView:(id)arg1;
- (BOOL)pageIndexIsInRange:(int)arg1;
- (float)pageLabelBottomSpace;
- (void)pageRangeUpdated;
- (id)pathOfCenterCell;
- (id)pdfPassword;
- (id)pdfURL;
- (id)previewViewControllerForItemAtIndexPath:(id)arg1;
- (void)previewingContext:(id)arg1 commitViewController:(id)arg2;
- (id)previewingContext:(id)arg1 viewControllerForLocation:(struct CGPoint { float x1; float x2; })arg2;
- (id)quickLookPDFURL;
- (void)removePage:(id)arg1 forPageIndex:(int)arg2;
- (void)resetAllPageImages;
- (BOOL)scaleUpOnDestinationPaper;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint { float x1; float x2; })arg2 targetContentOffset:(inout struct CGPoint { float x1; float x2; }*)arg3;
- (void)setArrayOfPageImages:(id)arg1;
- (void)setDestinationPaper:(id)arg1;
- (void)setEndPage:(id)arg1 forPageIndex:(int)arg2;
- (void)setGrayscalePreview:(BOOL)arg1;
- (void)setInitialPageIndexToCenter:(int)arg1;
- (void)setPdfPassword:(id)arg1;
- (void)setPdfURL:(id)arg1;
- (void)setQuickLookPDFURL:(id)arg1;
- (void)setScaleUpOnDestinationPaper:(BOOL)arg1;
- (void)setStartPage:(id)arg1 forPageIndex:(int)arg2;
- (void)sharePressed:(id)arg1;
- (void)trackCenterCell;
- (void)updateLayout;
- (void)updatePageNumberBadgeLocation;
- (struct _NSRange { unsigned int x1; unsigned int x2; })validRenderRange;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLoad;

@end
