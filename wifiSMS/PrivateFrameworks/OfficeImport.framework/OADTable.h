/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class OADTableProperties, OADTableGrid, NSMutableArray;



@interface OADTable : OADDrawable 
{
    OADTableProperties *mProperties;
    OADTableGrid *mGrid;
    NSMutableArray *mRows;
}


- (id)init;
- (void)dealloc;
- (id)tableProperties;
- (id)grid;
- (NSUInteger)rowCount;
- (id)rowAtIndex:(NSUInteger)arg1;
- (id)addRow;
- (void)setParentTextListStyle:(id)arg1;

@end
