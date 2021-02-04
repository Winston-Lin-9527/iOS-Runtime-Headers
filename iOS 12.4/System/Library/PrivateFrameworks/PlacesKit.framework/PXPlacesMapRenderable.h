/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:26:42 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/PlacesKit.framework/PlacesKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSOrderedSet;


@protocol PXPlacesMapRenderable <NSObject>
@property (__weak) id<PXPlacesMapRenderer> renderer; 
@property (__weak) id<PXPlacesMapSelectionHandler> selectionHandler; 
@property (retain) NSOrderedSet * geotaggables; 
@property (assign,nonatomic) long long index; 
@required
-(id<PXPlacesMapSelectionHandler>)selectionHandler;
-(void)setSelectionHandler:(id)arg1;
-(id<PXPlacesMapRenderer>)renderer;
-(NSOrderedSet *)geotaggables;
-(void)setGeotaggables:(id)arg1;
-(void)setRenderer:(id)arg1;
-(long long)index;
-(void)setIndex:(long long)arg1;

@end
