/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:06 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class TUSearchController, NSMutableArray;

@interface TUAutocompleteResultPartitioner : NSObject {

	TUSearchController* _searchController;
	NSMutableArray* _normalResultsArray;
	NSMutableArray* _foundInMailResultsArray;
	NSMutableArray* _foundOnServersResultsArray;

}

@property (nonatomic,retain) NSMutableArray * normalResultsArray;                      //@synthesize normalResultsArray=_normalResultsArray - In the implementation block
@property (nonatomic,retain) NSMutableArray * foundInMailResultsArray;                 //@synthesize foundInMailResultsArray=_foundInMailResultsArray - In the implementation block
@property (nonatomic,retain) NSMutableArray * foundOnServersResultsArray;              //@synthesize foundOnServersResultsArray=_foundOnServersResultsArray - In the implementation block
@property (__weak) TUSearchController * searchController;                              //@synthesize searchController=_searchController - In the implementation block
+(BOOL)sourceTypeIsFoundInMail:(unsigned long long)arg1 ;
+(BOOL)sourceTypeIsFoundOnServers:(unsigned long long)arg1 ;
-(void)addResult:(id)arg1 ;
-(NSMutableArray *)foundInMailResultsArray;
-(NSMutableArray *)foundOnServersResultsArray;
-(NSMutableArray *)normalResultsArray;
-(void)setNormalResultsArray:(NSMutableArray *)arg1 ;
-(void)setFoundInMailResultsArray:(NSMutableArray *)arg1 ;
-(void)setFoundOnServersResultsArray:(NSMutableArray *)arg1 ;
-(id)searchResults;
-(id)init;
-(TUSearchController *)searchController;
-(void)setSearchController:(TUSearchController *)arg1 ;
@end
