-- phpMyAdmin SQL Dump
-- version 5.2.0
-- https://www.phpmyadmin.net/
--
-- Host: 127.0.0.1
-- Generation Time: Jul 28, 2022 at 07:04 AM
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
-- Table structure for table `incentive`
--

CREATE TABLE `incentive` (
  `Number` int(11) NOT NULL,
  `Employee_ref_id` int(11) DEFAULT NULL,
  `Incentive_date` date DEFAULT NULL,
  `Incentive_amount` int(11) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- Dumping data for table `incentive`
--

INSERT INTO `incentive` (`Number`, `Employee_ref_id`, `Incentive_date`, `Incentive_amount`) VALUES
(1, 3, '2013-02-01', 5000),
(2, 2, '2013-02-01', 3000),
(3, 3, '2013-02-01', 4000),
(4, 1, '2013-01-01', 4500),
(5, 2, '2013-01-01', 3500);

--
-- Indexes for dumped tables
--

--
-- Indexes for table `incentive`
--
ALTER TABLE `incentive`
  ADD PRIMARY KEY (`Number`),
  ADD KEY `Employee_ref_id` (`Employee_ref_id`);

--
-- Constraints for dumped tables
--

--
-- Constraints for table `incentive`
--
ALTER TABLE `incentive`
  ADD CONSTRAINT `incentive_ibfk_1` FOREIGN KEY (`Employee_ref_id`) REFERENCES `employee` (`Employee_id`);
COMMIT;

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
