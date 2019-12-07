/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:17:31 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/Home-Structs.h>
#import <Home/HFItemProvider.h>

@protocol HFRoomSuggestionVendor;
@class HMHome, NSSet;

@interface HFRoomSuggestionItemProvider : HFItemProvider {

	unsigned long long _suggestedRoomLimit;
	HMHome* _home;
	id<HFRoomSuggestionVendor> _suggestionVendor;
	NSSet* _supplementaryRoomBuilders;
	NSSet* _suggestionItems;

}

@property (nonatomic,retain) NSSet * suggestionItems;                                  //@synthesize suggestionItems=_suggestionItems - In the implementation block
@property (assign,nonatomic) unsigned long long suggestedRoomLimit;                    //@synthesize suggestedRoomLimit=_suggestedRoomLimit - In the implementation block
@property (nonatomic,readonly) HMHome * home;                                          //@synthesize home=_home - In the implementation block
@property (nonatomic,retain) id<HFRoomSuggestionVendor> suggestionVendor;              //@synthesize suggestionVendor=_suggestionVendor - In the implementation block
@property (nonatomic,copy) NSSet * supplementaryRoomBuilders;                          //@synthesize supplementaryRoomBuilders=_supplementaryRoomBuilders - In the implementation block
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(HMHome *)home;
-(id)items;
-(NSSet *)suggestionItems;
-(void)setSuggestionItems:(NSSet *)arg1 ;
-(id)initWithHome:(id)arg1 ;
-(id)reloadItems;
-(id)invalidationReasons;
-(id)initWithHome:(id)arg1 suggestionVendor:(id)arg2 ;
-(id)_filteredSuggestions;
-(unsigned long long)suggestedRoomLimit;
-(id)_filteredSupplementaryRoomBuilders;
-(NSSet *)supplementaryRoomBuilders;
-(id<HFRoomSuggestionVendor>)suggestionVendor;
-(id)_keyForRoomName:(id)arg1 ;
-(void)setSuggestedRoomLimit:(unsigned long long)arg1 ;
-(void)setSuggestionVendor:(id<HFRoomSuggestionVendor>)arg1 ;
-(void)setSupplementaryRoomBuilders:(NSSet *)arg1 ;
@end
