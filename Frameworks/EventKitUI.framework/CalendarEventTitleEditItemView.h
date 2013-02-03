/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@class NSString, UITableView;

@interface CalendarEventTitleEditItemView : CalendarEventEditItemView <UITableViewDelegate, UITableViewDataSource> {
    NSString *_location;
    UITableView *_table;
    NSString *_title;
}

- (void)_textFieldEndEditingOnReturn:(id)arg1;
- (id)_textViewForRow:(NSInteger)arg1;
- (void)absorbValueFromSerializedValue:(id)arg1;
- (BOOL)becomeFirstResponder;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)location;
- (id)navigationTitle;
- (BOOL)resignFirstResponder;
- (void)setLocation:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didUpdateTextFieldForRowAtIndexPath:(id)arg2 withValue:(id)arg3;
- (float)tableView:(id)arg1 heightForHeaderInSection:(NSInteger)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (NSInteger)tableView:(id)arg1 numberOfRowsInSection:(NSInteger)arg2;
- (BOOL)tableView:(id)arg1 wantsHeaderForSection:(NSInteger)arg2;
- (id)title;

@end