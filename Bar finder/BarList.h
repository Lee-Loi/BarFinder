//
//  BarList.h
//  Curated list of Bars in the Dublin city centre by Lee-Loi
//
//  Created by Lee-Loi Chieng on 03/12/2015.
//  Copyright © 2015 Lee-Loi Chieng. All rights reserved.
//


GMSMarker *_frontLounge;
_frontLounge.map = nil;
_frontLounge = [[GMSMarker alloc] init];
_frontLounge.title = @"The front lounge";
_frontLounge.snippet = @"Opening hours: 3pm - 3am. \nType of bar: LGBT, Modern";
_frontLounge.position = CLLocationCoordinate2DMake(53.344538, -6.267484);
_frontLounge.icon = [UIImage imageNamed:@"Cocktail"];
_frontLounge.map = mapView_;

GMSMarker *_theTempleBar;
_theTempleBar.map = nil;
_theTempleBar = [[GMSMarker alloc] init];
_theTempleBar.title = @"The Temple Bar";
_theTempleBar.snippet = @"Opening hours: 10:30am - 2:30am. \nType of bar: Classic";
_theTempleBar.position = CLLocationCoordinate2DMake(53.345471, -6.264052);
_theTempleBar.icon = [UIImage imageNamed:@"Cocktail"];
_theTempleBar.map = mapView_;

GMSMarker *_doylesMarker;
_doylesMarker = [[GMSMarker alloc] init];
_doylesMarker.title = @"Doyles";
_doylesMarker.snippet = @"Opening hours: 12:00pm - 3:00am. \nType of bar: Classic pub";
_doylesMarker.position = CLLocationCoordinate2DMake(53.345795, -6.257366);
_doylesMarker.icon = [UIImage imageNamed:@"Cocktail"];
_doylesMarker.map = mapView_;

GMSMarker *_graftonLoungeMarker;
_graftonLoungeMarker = [[GMSMarker alloc] init];
_graftonLoungeMarker.title = @"The Grafton Lounge";
_graftonLoungeMarker.snippet = @"Opening hours: 9:30am - Late. \nType of bar: Modern";
_graftonLoungeMarker.position = CLLocationCoordinate2DMake(53.341747, -6.259220);
_graftonLoungeMarker.icon = [UIImage imageNamed:@"Cocktail"];
_graftonLoungeMarker.map = mapView_;

GMSMarker *_diceysMarker;
_diceysMarker.map = nil;
_diceysMarker = [[GMSMarker alloc] init];
_diceysMarker.title = @"Diceys";
_diceysMarker.snippet = @"Opening hours: 4:30pm - 2:30am \nType of bar: Modern";
_diceysMarker.position = CLLocationCoordinate2DMake(53.335791, -6.263553);
_diceysMarker.icon = [UIImage imageNamed:@"Cocktail"];
_diceysMarker.map = mapView_;

GMSMarker *_theGeorgeMarker;
_theGeorgeMarker.map = nil;
_theGeorgeMarker = [[GMSMarker alloc] init];
_theGeorgeMarker.title = @"The George";
_theGeorgeMarker.snippet = @"Opening hours: 12:30pm - 2:30am. \nType of bar: LGBT, Modern";
_theGeorgeMarker.position = CLLocationCoordinate2DMake(53.343627, -6.264608);
_theGeorgeMarker.icon = [UIImage imageNamed:@"Cocktail"];
_theGeorgeMarker.map = mapView_;

GMSMarker *_dameLane;
_dameLane.map = nil;
_dameLane = [[GMSMarker alloc] init];
_dameLane.title = @"4 Dame Lane";
_dameLane.snippet = @"Opening hours: 5pm - 3am. \nType of bar: Classic";
_dameLane.position = CLLocationCoordinate2DMake(53.343756, -6.262761);
_dameLane.icon = [UIImage imageNamed:@"Cocktail"];
_dameLane.map = mapView_;

GMSMarker *_pygmalionMarker;
_pygmalionMarker.map = nil;
_pygmalionMarker = [[GMSMarker alloc] init];
_pygmalionMarker.title = @"Pygmalion";
_pygmalionMarker.snippet = @"Opening hours: 10:30am - Late. \nAge entry: 21. \nType of bar: Classic";
_pygmalionMarker.position = CLLocationCoordinate2DMake(53.342251, -6.261992);
_pygmalionMarker.icon = [UIImage imageNamed:@"Cocktail"];
_pygmalionMarker.map = mapView_;

GMSMarker *_opiumMarker;
_opiumMarker.map = nil;
_opiumMarker = [[GMSMarker alloc] init];
_opiumMarker.title = @"Opium";
_opiumMarker.snippet = @"Opening hours: 12pm - 10pm. \nType of bar: Modern";
_opiumMarker.position = CLLocationCoordinate2DMake(53.336665, -6.265512);
_opiumMarker.icon = [UIImage imageNamed:@"Cocktail"];
_opiumMarker.map = mapView_;

GMSMarker *_dandelion;
_dandelion.map = nil;
_dandelion = [[GMSMarker alloc] init];
_dandelion.title = @"Dandelion";
_dandelion.snippet = @"Opening hours: 5pm - Late. \nType of bar: Classic";
_dandelion.position = CLLocationCoordinate2DMake(53.339624, -6.261393);
_dandelion.icon = [UIImage imageNamed:@"Cocktail"];
_dandelion.map = mapView_;

GMSMarker *_dawsonStreet;
_dawsonStreet.map = nil;
_dawsonStreet = [[GMSMarker alloc] init];
_dawsonStreet.title = @"37 Dawson Street";
_dawsonStreet.snippet = @"Opening hours: 12pm - 2:30am. \nType of bar: Whiskey bar";
_dawsonStreet.position = CLLocationCoordinate2DMake(53.339624, -6.261393);
_dawsonStreet.icon = [UIImage imageNamed:@"Cocktail"];
_dawsonStreet.map = mapView_;

GMSMarker *_Capitol;
_Capitol.map = nil;
_Capitol = [[GMSMarker alloc] init];
_Capitol.title = @"Capitol Lounge";
_Capitol.snippet = @"Opening hours: 12pm - 2:30am. \nType of bar: Classic";
_Capitol.position = CLLocationCoordinate2DMake(53.341392, -6.265232);
_Capitol.icon = [UIImage imageNamed:@"Cocktail"];
_Capitol.map = mapView_;

GMSMarker *_Coppers;
_Coppers.map = nil;
_Coppers = [[GMSMarker alloc] init];
_Coppers.title = @"Copper Face Jacks";
_Coppers.snippet = @"Opening hours: 11:30am - 3:30am. \nType of bar: Classic. \nDublins most famous pub";
_Coppers.position = CLLocationCoordinate2DMake(53.335392, -6.263539);
_Coppers.icon = [UIImage imageNamed:@"Cocktail"];
_Coppers.map = mapView_;

GMSMarker *_palace;
_palace.map = nil;
_palace = [[GMSMarker alloc] init];
_palace.title = @"The Palace";
_palace.snippet = @"Opening hours: 10pm - 2:00am. \nType of bar: modern.";
_palace.position = CLLocationCoordinate2DMake(53.335971, -6.265369);
_palace.icon = [UIImage imageNamed:@"Cocktail"];
_palace.map = mapView_;

