/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:20:50 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <MapKit/MapKit-Structs.h>
@interface MKQuadTrie : NSObject {

	unsigned _maxItems;
	CGSize _minSize;
	SCD_Struct_MK1 _initialRegion;
	void* __root;

}
-(BOOL)contains:(id)arg1 ;
-(id)initWithInitialRegion:(SCD_Struct_MK1)arg1 minimumSize:(CGSize)arg2 maximumItems:(unsigned)arg3 ;
-(id)_itemsInMapRect:(SCD_Struct_MK1)arg1 ;
-(id)itemsInMapRect:(SCD_Struct_MK1)arg1 ;
-(id)itemsPassingRectTest:(/*^block*/id)arg1 coordinateTest:(/*^block*/id)arg2 ;
-(void)clearAllItemsPerforming:(/*^block*/id)arg1 ;
-(id)depthFirstDescription;
-(id)breadthFirstDescription;
-(id)itemDescriptions;
-(id)allItems;
-(BOOL)remove:(id)arg1 ;
-(void)insert:(id)arg1 ;
-(void)foreach:(/*^block*/id)arg1 ;
-(void)dealloc;
-(unsigned long long)count;
-(id)description;
@end
