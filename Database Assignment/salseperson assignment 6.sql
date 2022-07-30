-- phpMyAdmin SQL Dump
-- version 5.2.0
-- https://www.phpmyadmin.net/
--
-- Host: 127.0.0.1
-- Generation Time: Jul 28, 2022 at 08:36 AM
-- Server version: 10.4.24-MariaDB
-- PHP Version: 7.4.29

SET SQL_MODE = "NO_AUTO_VALUE_ON_ZERO";
START TRANSACTION;
SET time_zone = "+00:00";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8mb4 */;

--
-- Database: `assignment1`
--

-- --------------------------------------------------------

--
-- Table structure for table `salseperson`
--

CREATE TABLE `salseperson` (
  `sno` int(11) NOT NULL,
  `sname` varchar(20) DEFAULT NULL,
  `city` varchar(20) DEFAULT NULL,
  `comm` float DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- Dumping data for table `salseperson`
--

INSERT INTO `salseperson` (`sno`, `sname`, `city`, `comm`) VALUES
(1001, 'peel', 'london', 0.12),
(1002, 'serres', 'san jose', 0.13),
(1003, 'axelrod', 'new york', 0.1),
(1004, 'motika', 'london', 0.11),
(1007, 'rafkin', 'barcelona', 0.15);

--
-- Indexes for dumped tables
--

--
-- Indexes for table `salseperson`
--
ALTER TABLE `salseperson`
  ADD PRIMARY KEY (`sno`);
COMMIT;

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
